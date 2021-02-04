/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/AKNoteEditorControllerDelegate.h>
#import <libobjc.A.dylib/AKHighlightColorEditorControllerDelegate.h>
#import <libobjc.A.dylib/AKNoteEditorControllerDelegate.h>

@class AKController, AKPageModelController, AKGeometryHelper, AKLayerPresentationManager, UIView, AKInkPageOverlayController, AKHighlightColorEditorController, NSMutableDictionary, NSString;

@interface AKPageController : NSObject <AKNoteEditorControllerDelegate, AKHighlightColorEditorControllerDelegate, AKNoteEditorControllerDelegate> {

	BOOL _shouldPixelate;
	BOOL _superviewDependentThingsWereSetUp;
	AKController* _controller;
	AKPageModelController* _pageModelController;
	unsigned long long _pageIndex;
	AKGeometryHelper* _geometryHelper;
	AKLayerPresentationManager* _layerPresentationManager;
	UIView* _overlayView;
	AKInkPageOverlayController* _inkPageOverlayController;
	id _inkOverlayDrawingUndoTarget;
	AKHighlightColorEditorController* _highlightColorEditorController;
	NSMutableDictionary* _noteEditors;

}

@property (__weak) AKController * controller;                                                                  //@synthesize controller=_controller - In the implementation block
@property (retain) AKPageModelController * pageModelController;                                                //@synthesize pageModelController=_pageModelController - In the implementation block
@property (nonatomic,retain) AKGeometryHelper * geometryHelper;                                                //@synthesize geometryHelper=_geometryHelper - In the implementation block
@property (assign) BOOL superviewDependentThingsWereSetUp;                                                     //@synthesize superviewDependentThingsWereSetUp=_superviewDependentThingsWereSetUp - In the implementation block
@property (nonatomic,retain) AKLayerPresentationManager * layerPresentationManager;                            //@synthesize layerPresentationManager=_layerPresentationManager - In the implementation block
@property (nonatomic,retain) AKInkPageOverlayController * inkPageOverlayController;                            //@synthesize inkPageOverlayController=_inkPageOverlayController - In the implementation block
@property (nonatomic,retain) id inkOverlayDrawingUndoTarget;                                                   //@synthesize inkOverlayDrawingUndoTarget=_inkOverlayDrawingUndoTarget - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                             //@synthesize overlayView=_overlayView - In the implementation block
@property (retain) NSMutableDictionary * noteEditors;                                                          //@synthesize noteEditors=_noteEditors - In the implementation block
@property (assign) unsigned long long pageIndex;                                                               //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign) BOOL shouldPixelate;                                                                        //@synthesize shouldPixelate=_shouldPixelate - In the implementation block
@property (nonatomic,readonly) AKHighlightColorEditorController * highlightColorEditorController;              //@synthesize highlightColorEditorController=_highlightColorEditorController - In the implementation block
@property (readonly) id<AKControllerDelegateProtocol> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pageControllerWithController:(id)arg1 andPageModelController:(id)arg2 ;
-(AKGeometryHelper *)geometryHelper;
-(AKPageModelController *)pageModelController;
-(long long)currentModelToScreenExifOrientation;
-(double)currentModelToScreenScaleFactor;
-(AKLayerPresentationManager *)layerPresentationManager;
-(CGRect)maxPageRect;
-(CGPoint)convertPointFromOverlayToModel:(CGPoint)arg1 ;
-(CGRect)convertRectFromOverlayToModel:(CGRect)arg1 ;
-(double)modelBaseScaleFactor;
-(BOOL)relinquishablesAreLoaded;
-(CGRect)stickyViewFrameForNoteEditor:(id)arg1 ;
-(id)stickyContainerForNoteEditor:(id)arg1 ;
-(unsigned long long)edgeForNoteEditor:(id)arg1 ;
-(id)popoverPresentingViewControllerForNoteEditor:(id)arg1 ;
-(void)noteEditorWillDismissFromFullScreen:(id)arg1 ;
-(void)noteEditorDidBeginEditing:(id)arg1 ;
-(void)noteEditorDidFinishEditing:(id)arg1 ;
-(void)noteEditorWillPresentFullScreen:(id)arg1 ;
-(AKInkPageOverlayController *)inkPageOverlayController;
-(void)openPopoverForHighlightAnnotation:(id)arg1 ;
-(id)inkOverlayDrawingUndoTarget;
-(void)setShouldPixelate:(BOOL)arg1 ;
-(void)setupRelinquishables;
-(void)releaseRelinquishables;
-(CGRect)convertRectFromModelToOverlay:(CGRect)arg1 ;
-(CGRect)visibleRectOfOverlay;
-(void)addPopupToAnnotation:(id)arg1 openPopup:(BOOL)arg2 ;
-(void)removeNoteFromAnnotation:(id)arg1 ;
-(CGPoint)convertPointFromModelToOverlay:(CGPoint)arg1 ;
-(id)newContentSnapshotPDFDataAtScale:(double)arg1 inRect:(CGRect)arg2 forLoupeAnnotation:(id)arg3 ;
-(id)annotationsBeneathLoupe:(id)arg1 ;
-(BOOL)editorController:(id)arg1 isRightArrowEnabledForAnnotation:(id)arg2 ;
-(void)editorController:(id)arg1 setTheme:(id)arg2 forAnnotation:(id)arg3 ;
-(void)editorController:(id)arg1 deleteAnnotation:(id)arg2 ;
-(void)editorController:(id)arg1 editNote:(id)arg2 ;
-(void)editorController:(id)arg1 showEditMenuForAnnotation:(id)arg2 ;
-(id)_initWithController:(id)arg1 andPageModelController:(id)arg2 ;
-(void)setPageModelController:(AKPageModelController *)arg1 ;
-(void)setNoteEditors:(NSMutableDictionary *)arg1 ;
-(void)setInkOverlayDrawingUndoTarget:(id)arg1 ;
-(void)setGeometryHelper:(AKGeometryHelper *)arg1 ;
-(void)setLayerPresentationManager:(AKLayerPresentationManager *)arg1 ;
-(void)setInkPageOverlayController:(AKInkPageOverlayController *)arg1 ;
-(void)setSuperviewDependentThingsWereSetUp:(BOOL)arg1 ;
-(BOOL)shouldPixelate;
-(BOOL)superviewDependentThingsWereSetUp;
-(void)updateScaleFactor:(double)arg1 isLiveUpdate:(BOOL)arg2 forceUpdate:(BOOL)arg3 ;
-(id)_popoverPresentingViewController;
-(void)openPopupAnnotation:(id)arg1 ;
-(NSMutableDictionary *)noteEditors;
-(BOOL)handleEditAnnotation:(id)arg1 ;
-(void)overlayWasAddedToSuperview;
-(AKHighlightColorEditorController *)highlightColorEditorController;
-(id)initForTesting;
-(id<AKControllerDelegateProtocol>)delegate;
-(void)teardown;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end
