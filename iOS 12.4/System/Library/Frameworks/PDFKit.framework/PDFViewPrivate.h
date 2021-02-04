/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFViewDelegate, PDFViewPopupManager;
#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, PDFScrollView, PDFViewController, PDFSelection, PDFViewLayout, PDFRenderingProperties, PDFPage, PDFTimer, NSMutableArray, NSArray, PDFCoachMarkManager, PDFPasswordViewController, NSObject, PDFAnnotation, PDFAKOverlayAdaptor, UILongPressGestureRecognizer, PDFPanGestureRecognizer, UITapGestureRecognizer, UISwipeGestureRecognizer, PDFDocumentViewController, NSDictionary, UIDragInteraction;

@interface PDFViewPrivate : NSObject {

	PDFDocument* document;
	PDFScrollView* scrollView;
	PDFViewController* controller;
	PDFSelection* currentSelection;
	BOOL autoScale;
	BOOL scaling;
	double zoomIncrement;
	id<PDFViewDelegate> delegate;
	BOOL delegateWillScale;
	BOOL delegateOrdersPageDrawing;
	double gutterWide;
	BOOL displaysPageBreaks;
	UIEdgeInsets pageBreakMargins;
	UIEdgeInsets documentMargins;
	long long displayMode;
	long long displayDirection;
	PDFViewLayout* viewLayout;
	BOOL scrollingChangesPages;
	BOOL displaysAsBook;
	BOOL displaysRTL;
	PDFRenderingProperties* renderingProperties;
	unsigned long long lastVerticalScrollDirection;
	unsigned long long lastHorizontalScrollDirection;
	BOOL displaysBookmarksForPages;
	unsigned long long scrollEntry;
	unsigned long long currentPageIndex;
	unsigned long long firstVisiblePage;
	unsigned long long lastVisiblePage;
	BOOL inhibitAutoScroll;
	PDFPage* fromPage;
	PDFTimer* pageSyncTimer;
	NSMutableArray* destinationHistory;
	long long historyIndex;
	NSArray* highlights;
	PDFCoachMarkManager* coachMarkManager;
	PDFPasswordViewController* passwordViewController;
	NSObject*<PDFViewPopupManager> popupManager;
	PDFAnnotation* currentTextWidget;
	PDFAKOverlayAdaptor* akOverlayAdaptor;
	BOOL enableSelectionDrawing;
	BOOL showsScrollIndicators;
	BOOL debugDrawCGPDFNodeLayer[11];
	BOOL wantsForceUpdate;
	double blockingWaitDuration;
	UILongPressGestureRecognizer* longPressGestureRecognizer;
	PDFPanGestureRecognizer* panGestureRecognizer;
	UITapGestureRecognizer* tapGestureRecognizer;
	UISwipeGestureRecognizer* swipeGestureRecognizer;
	BOOL needsRotationZoomFix;
	PDFDocumentViewController* documentViewController;
	BOOL isUsingPageViewController;
	NSDictionary* pageViewControllerOptions;
	UIDragInteraction* dragInteraction;
	double horizontalScaleFactorBeforeRotation;
	CGPoint documentViewCenterBeforeRotation;
	CGRect extensionViewBoundsInDocument;
	CGRect extensionViewFrame;
	double extensionViewZoomScale;
	PDFTimer* tilesSyncTimer;

}
@end
