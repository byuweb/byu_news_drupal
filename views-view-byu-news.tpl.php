<?php
/**
 * @file
 * Default simple view template to display a rows in a BYU News Feed.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 * - $columns contains a nested array of columns. Each column contains an
 *   array of columns.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)) : ?>
    <h3><?php print $title; ?></h3>
<?php endif; ?>

<div class="" >
    <?php foreach ($rows as $id => $row): ?>
        <byu-news><?php print $row; ?></byu-news>
    <?php endforeach; ?>

</div>
