/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKControllerDelegate, PKRendererControllerProtocol, OS_dispatch_semaphore, OS_dispatch_queue;
#import <PencilKit/PencilKit-Structs.h>
@class NSObject, NSMutableArray, PKDrawing, NSArray, PKStrokeGenerator;

@interface PKController : NSObject {

	BOOL _liveInteraction;
	BOOL _isSuspended;
	BOOL _previewsSuspended;
	NSObject*<PKControllerDelegate> _delegate;
	NSMutableArray* _renderedStrokes;
	id<PKRendererControllerProtocol> _rendererController;
	PKDrawing* _drawing;
	NSObject*<OS_dispatch_semaphore> _interactSemaphore;
	NSObject*<OS_dispatch_queue> _interactQueue;
	NSObject*<OS_dispatch_queue> _suspendQueue;
	NSObject*<OS_dispatch_queue> _previewQueue;
	NSArray* _additionalStrokes;
	NSArray* _hideAdditionalStrokes;

}

@property (nonatomic,retain) id<PKRendererControllerProtocol> rendererController;              //@synthesize rendererController=_rendererController - In the implementation block
@property (nonatomic,retain) PKDrawing * drawing;                                              //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> interactSemaphore;               //@synthesize interactSemaphore=_interactSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> interactQueue;                       //@synthesize interactQueue=_interactQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * renderedStrokes;                                 //@synthesize renderedStrokes=_renderedStrokes - In the implementation block
@property (assign,nonatomic) BOOL isSuspended;                                                 //@synthesize isSuspended=_isSuspended - In the implementation block
@property (assign,nonatomic) BOOL previewsSuspended;                                           //@synthesize previewsSuspended=_previewsSuspended - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> suspendQueue;                        //@synthesize suspendQueue=_suspendQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> previewQueue;                        //@synthesize previewQueue=_previewQueue - In the implementation block
@property (assign) BOOL liveInteraction;                                                       //@synthesize liveInteraction=_liveInteraction - In the implementation block
@property (nonatomic,retain) NSArray * additionalStrokes;                                      //@synthesize additionalStrokes=_additionalStrokes - In the implementation block
@property (nonatomic,retain) NSArray * hideAdditionalStrokes;                                  //@synthesize hideAdditionalStrokes=_hideAdditionalStrokes - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<PKControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKStrokeGenerator * inputController; 
+(void)updatesFrom:(id)arg1 to:(id)arg2 newStrokesToRender:(id*)arg3 redrawAllInRect:(CGRect*)arg4 ;
-(id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 renderQueue:(id)arg3 ;
-(void)suspendDrawing;
-(void)resumeDrawing;
-(void)suspendDrawingImmediately:(BOOL)arg1 ;
-(id<PKRendererControllerProtocol>)rendererController;
-(void)resumePreviews;
-(void)setIsSuspended:(BOOL)arg1 ;
-(void)cancelLongRunningRenders;
-(void)setLiveInteraction:(BOOL)arg1 ;
-(void)updateDrawing;
-(void)_renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(void)_setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(CGImageRef)arg3 andMask:(CGImageRef)arg4 setupComplete:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_loadInitialDrawing:(id)arg1 withImage:(CGImageRef)arg2 andMask:(CGImageRef)arg3 ;
-(BOOL)_updateFrom:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderAllInStrokeSpaceRect:(CGRect)arg1 completion:(/*^block*/id)arg2 ;
-(void)_drawingChanged;
-(void)_renderAllInStrokeSpaceRect:(CGRect)arg1 selectedStrokes:(id)arg2 hideSelected:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_renderStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)performAsyncInteractBlock:(/*^block*/id)arg1 ;
-(void)_updateDrawing:(id)arg1 erasedStrokes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateDrawingWithErasedStrokes:(id)arg1 ;
-(PKDrawing *)drawing;
-(void)applyCommands:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_applyCommands:(id)arg1 interactCompletion:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_didRenderStrokes:(id)arg1 ;
-(void)removeStrokesInRect:(CGRect)arg1 from:(id)arg2 ;
-(NSMutableArray *)renderedStrokes;
-(void)setRenderedStrokes:(NSMutableArray *)arg1 ;
-(void)didStartLiveInteractionWith:(id)arg1 ;
-(void)didEndLiveInteraction;
-(void)suspendPreviews;
-(void)setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(CGAffineTransform)arg3 setupComplete:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(CGImageRef)arg3 andMask:(CGImageRef)arg4 setupComplete:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)updateOrientation:(long long)arg1 ;
-(void)updateDrawingFrom:(id)arg1 ;
-(void)updateDrawing:(BOOL)arg1 withAdditionalStrokes:(id)arg2 hide:(BOOL)arg3 isErasing:(BOOL)arg4 ;
-(void)clearAdditionalStrokes;
-(void)applyCommand:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 inStrokeSpaceClipRect:(CGRect)arg5 completion:(/*^block*/id)arg6 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)renderStrokes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renderTiles:(id)arg1 tileTransform:(CGAffineTransform)arg2 completion:(/*^block*/id)arg3 ;
-(void)renderTilesIntoTiles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renderStrokes:(id)arg1 intoTile:(id)arg2 ;
-(void)drawingChanged;
-(void)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(void)imageWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)addNewRenderedStroke:(id)arg1 preDrawingChangedBlock:(/*^block*/id)arg2 ;
-(void)setRendererController:(id<PKRendererControllerProtocol>)arg1 ;
-(BOOL)liveInteraction;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)interactSemaphore;
-(void)setInteractSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)interactQueue;
-(void)setInteractQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)previewsSuspended;
-(void)setPreviewsSuspended:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)suspendQueue;
-(void)setSuspendQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPreviewQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)additionalStrokes;
-(void)setAdditionalStrokes:(NSArray *)arg1 ;
-(NSArray *)hideAdditionalStrokes;
-(void)setHideAdditionalStrokes:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)previewQueue;
-(id)init;
-(void)setDelegate:(NSObject*<PKControllerDelegate>)arg1 ;
-(NSObject*<PKControllerDelegate>)delegate;
-(void)teardown;
-(BOOL)isSuspended;
-(PKStrokeGenerator *)inputController;
@end

