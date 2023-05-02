#include &quot;lists.h&quot;

#include &lt;stdio.h&gt;
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
* looped_listint_len - Counts the number of unique nodes
* in a looped listint_t linked list.
* @head: A pointer to the head of the listint_t to check.
*
* Return: If the list is not looped - 0.
* Otherwise - the number of unique nodes in the list.
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;
if (head == NULL || head-&gt;next == NULL)
return (0);
tortoise = head-&gt;next;
hare = (head-&gt;next)-&gt;next;
while (hare)
{
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise-&gt;next;
hare = hare-&gt;next;
}
tortoise = tortoise-&gt;next;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise-&gt;next;
}
return (nodes);
}
tortoise = tortoise-&gt;next;
hare = (hare-&gt;next)-&gt;next;

}
return (0);
}
/**
* print_listint_safe - Prints a listint_t list safely.
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head);
if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf(&quot;[%p] %d\n&quot;, (void *)head, head-&gt;n);
head = head-&gt;next;
}
}
else
{
for (index = 0; index &lt; nodes; index++)
{
printf(&quot;[%p] %d\n&quot;, (void *)head, head-&gt;n);
head = head-&gt;next;
}
printf(&quot;-&gt; [%p] %d\n&quot;, (void *)head, head-&gt;n);
}
return (nodes);
}
