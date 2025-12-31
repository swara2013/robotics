# All About Me — Design

This document captures the design decisions, content plan, and technical choices for the "All About Me" static website. Use this as the single source of truth while you build pages, wireframes, and the repository that will be hosted on GitHub Pages.

---

## Project

- Title: All About Me Website
- Owner: [Your Name]
- Contact: [email or social handle]

## Purpose & Audience

- Purpose: Share who I am, my hobbies, school interests, and small projects so friends, family, and teachers can learn about me.
- Audience: Classmates, teachers, family, and anyone curious about my hobbies or projects.

## Goals & Success Criteria

- Visitors can find 3 important facts about me within 10 seconds.
- The homepage loads quickly on mobile (target: < 2s on a modern connection).
- The site is accessible (WCAG AA where practical) and readable on phones and tablets.

## Sitemap / Pages

- Home — Hero, short intro, featured hobbies or projects
- About — Longer bio, academics, languages
- Hobbies — Cards/list for each hobby with image/icon and short description
- Projects — Short notes on coding/robotics projects (optional links or screenshots)
- Gallery — Photos or art (optimized, lazy-loaded)
- Contact — Email or safe contact form + social links

## Content Inventory (from current notes)

- Hobbies
	- Singing — short line describing your interest
	- Dancing
	- Percussion (school band)
	- Veena (Indian instrument)
	- Art (making art)
	- Badminton
	- Table tennis
	- (Used to play) Tennis
	- Coding
	- Robotics

- Academics
	- Reading books
	- Enjoy math
	- Learning Spanish
	- Grade: 7 (age: 12)

- Cool Facts
	- Younger sister
	- Vegetarian
	- Wishes: wants a pet
	- Languages: speaks 4 languages

For each item above, add: title, 1–2 sentence description, and optional image (200–800px wide) with descriptive alt text.

## Components & Layout

- Navbar — logo/name on the left, links on the right (responsive hamburger on mobile)
- Hero — large heading, 1-line subheading, CTA (view hobbies / contact)
- Hobby Card — image/icon, title, 1–2 lines description, small tags
- Project Card — thumbnail, title, one-line summary, optional link
- Gallery Grid — responsive images with lightbox (optional)
- Footer — copyright, social links, small privacy note

Design notes:
- Mobile-first layout. Keep the header compact on small screens.
- Use clear visual hierarchy: large headings, comfortable line length (50–75 characters), and readable font sizes (16px base).

## Visual Style (starter suggestions)

- Colors
	- Primary: #1E88E5 (blue)
	- Accent: #FFC107 (amber)
	- Neutral: #FFFFFF (white), #F7F7F7 (light gray), #333333 (text)

- Typography
	- Headings: Google Font (e.g., Poppins or Montserrat)
	- Body: Google Font (e.g., Inter or Roboto)

- Spacing
	- Base unit: 8px (use multiples for padding/margins)

## Accessibility

- Add meaningful alt text for all images.
- Ensure color contrast meets WCAG AA for body text and UI controls.
- Use semantic HTML (nav, main, header, footer, h1..h3, button, form).
- Ensure keyboard navigation works for all interactive elements.

## SEO & Metadata

- Default meta title: "[Your Name] — All About Me"
- Default meta description: "Learn about [Your Name]: hobbies, academics, projects, and contact information."
- Open Graph image: /assets/og-image.png (create a simple image with name + portrait)

## Performance & Assets

- Optimize images (serve WebP if possible) and resize to appropriate dimensions.
- Lazy-load offscreen images (loading="lazy").
- Avoid large JavaScript bundles — prefer small vanilla JS or no JS for basic pages.

## Technical Stack & Deployment

- Option A (simple): Plain HTML, CSS, and a little JavaScript; commit to `main` and enable GitHub Pages.
- Option B (templating): Use a lightweight static site generator (Eleventy or Jekyll) if you want layouts and collections.
- Host: GitHub Pages (free and integrates with this repository).

Build / deploy notes:
- If using plain HTML, create `index.html`, `about.html`, and a `/assets/` folder for images & CSS.
- If using an SSG, add build scripts and a `.github/workflows/` workflow for automatic deploys (optional).

## Privacy & Analytics

- Keep in mind this is a site for a minor — avoid collecting personal data.
- If you want analytics, use a privacy-friendly provider (e.g., Plausible) or enable Google Analytics only with consent.

## Timeline & Tasks (suggested)

1. Finalize content and pick a profile photo (1 day)
2. Create a simple `index.html` with Navbar + Hero + 3 hobby cards (1–2 days)
3. Add About page + Gallery and finalize styles (2–3 days)
4. Test accessibility and mobile layout, optimize images (1 day)
5. Deploy to GitHub Pages and share the link (1 day)

## Quick Implementation Checklist (one-day wins)

- [ ] Write a short 1-paragraph intro for the hero and choose a profile photo
- [ ] Convert hobbies list into 5–8 card descriptions (title + 1 sentence)
- [ ] Choose 1–2 colors and one Google Font
- [ ] Create `index.html` skeleton and commit to repo
- [ ] Optimize 3 images and add alt text

## Open Questions

- Do you want a contact form, or just an email/social links?
- Would you like the site to have a Spanish translation (you learn Spanish)?

---

If you want, I can paste a ready-to-use `index.html` and `styles.css` next so you have a live starter site to deploy on GitHub Pages.