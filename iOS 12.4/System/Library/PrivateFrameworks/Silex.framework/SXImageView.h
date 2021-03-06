/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/STAXCustomRotorItemProvider.h>
#import <libobjc.A.dylib/SXAnimatedImageDelegate.h>
#import <libobjc.A.dylib/SXReachabilityObserver.h>
#import <libobjc.A.dylib/SXDraggable.h>

@protocol SXImageViewDelegate, SXResourceDataSource, SXReachabilityProvider;
@class NSString, UIView, SXImageResource, SXAnimatedImage, UIImage, NSMapTable, UIActivityIndicatorView, NSTimer, UILongPressGestureRecognizer;

@interface SXImageView : UIImageView <STAXCustomRotorItemProvider, SXAnimatedImageDelegate, SXReachabilityObserver, SXDraggable> {

	BOOL _shouldShowLoadingIndicator;
	BOOL _scrubbingEnabled;
	BOOL _isScrubbing;
	BOOL _autoPlayEnabled;
	BOOL _shouldResume;
	BOOL _shouldResumeAfterLoad;
	SXImageResource* _imageResource;
	id<SXImageViewDelegate> _delegate;
	SXAnimatedImage* _animatedImage;
	unsigned long long _frameIndex;
	/*^block*/id _frameChangeBlock;
	id<SXResourceDataSource> _resourceDataSource;
	id<SXReachabilityProvider> _reachabilityProvider;
	/*^block*/id _preferredQualityImageRequestCancelHandler;
	/*^block*/id _highQualityImageRequestCancelHandler;
	UIImage* _preferredQualityImage;
	UIImage* _highQualityImage;
	unsigned long long _preferredQualityInterest;
	unsigned long long _highQualityInterest;
	NSMapTable* _interestTable;
	UIActivityIndicatorView* _activityIndicatorView;
	unsigned long long _playCount;
	NSTimer* _activeTimer;
	unsigned long long _intendedFrameIndex;
	UILongPressGestureRecognizer* _scrubGesture;
	CGSize _preferredImageSize;
	CGSize _preferredQualityLoadingImageSize;
	CGPoint _previousPoint;

}

@property (nonatomic,__weak,readonly) id<SXResourceDataSource> resourceDataSource;              //@synthesize resourceDataSource=_resourceDataSource - In the implementation block
@property (nonatomic,readonly) id<SXReachabilityProvider> reachabilityProvider;                 //@synthesize reachabilityProvider=_reachabilityProvider - In the implementation block
@property (nonatomic,copy) id preferredQualityImageRequestCancelHandler;                        //@synthesize preferredQualityImageRequestCancelHandler=_preferredQualityImageRequestCancelHandler - In the implementation block
@property (nonatomic,copy) id highQualityImageRequestCancelHandler;                             //@synthesize highQualityImageRequestCancelHandler=_highQualityImageRequestCancelHandler - In the implementation block
@property (assign,nonatomic) CGSize preferredQualityLoadingImageSize;                           //@synthesize preferredQualityLoadingImageSize=_preferredQualityLoadingImageSize - In the implementation block
@property (assign,nonatomic,__weak) UIImage * preferredQualityImage;                            //@synthesize preferredQualityImage=_preferredQualityImage - In the implementation block
@property (assign,nonatomic,__weak) UIImage * highQualityImage;                                 //@synthesize highQualityImage=_highQualityImage - In the implementation block
@property (assign,nonatomic) unsigned long long preferredQualityInterest;                       //@synthesize preferredQualityInterest=_preferredQualityInterest - In the implementation block
@property (assign,nonatomic) unsigned long long highQualityInterest;                            //@synthesize highQualityInterest=_highQualityInterest - In the implementation block
@property (nonatomic,readonly) BOOL hasInterest; 
@property (nonatomic,readonly) BOOL prefersHighQuality; 
@property (nonatomic,retain) NSMapTable * interestTable;                                        //@synthesize interestTable=_interestTable - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                   //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (assign,nonatomic) BOOL shouldResume;                                                 //@synthesize shouldResume=_shouldResume - In the implementation block
@property (assign,nonatomic) BOOL shouldResumeAfterLoad;                                        //@synthesize shouldResumeAfterLoad=_shouldResumeAfterLoad - In the implementation block
@property (assign,nonatomic) unsigned long long playCount;                                      //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,retain) NSTimer * activeTimer;                                             //@synthesize activeTimer=_activeTimer - In the implementation block
@property (assign,nonatomic) unsigned long long intendedFrameIndex;                             //@synthesize intendedFrameIndex=_intendedFrameIndex - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * scrubGesture;                       //@synthesize scrubGesture=_scrubGesture - In the implementation block
@property (assign,nonatomic) CGPoint previousPoint;                                             //@synthesize previousPoint=_previousPoint - In the implementation block
@property (assign,nonatomic) BOOL isScrubbing;                                                  //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (nonatomic,readonly) SXImageResource * imageResource;                                 //@synthesize imageResource=_imageResource - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingIndicator;                                   //@synthesize shouldShowLoadingIndicator=_shouldShowLoadingIndicator - In the implementation block
@property (assign,nonatomic) long long loadingIndicatorStyle; 
@property (assign,nonatomic) BOOL scrubbingEnabled;                                             //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) CGSize preferredImageSize;                                         //@synthesize preferredImageSize=_preferredImageSize - In the implementation block
@property (assign,nonatomic,__weak) id<SXImageViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL containsAnimatedImage; 
@property (nonatomic,readonly) BOOL hasLoadedImage; 
@property (nonatomic,readonly) SXAnimatedImage * animatedImage;                                 //@synthesize animatedImage=_animatedImage - In the implementation block
@property (assign,nonatomic) unsigned long long frameIndex;                                     //@synthesize frameIndex=_frameIndex - In the implementation block
@property (nonatomic,copy) id frameChangeBlock;                                                 //@synthesize frameChangeBlock=_frameChangeBlock - In the implementation block
@property (nonatomic,readonly) BOOL paused; 
@property (assign,nonatomic) BOOL autoPlayEnabled;                                              //@synthesize autoPlayEnabled=_autoPlayEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSItemProviderWriting> dragObject; 
@property (nonatomic,readonly) NSString * dragIdentifier; 
@property (nonatomic,readonly) UIView * dragPreviewView; 
-(void)reachabilityChanged:(BOOL)arg1 ;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(unsigned long long)playCount;
-(BOOL)isScrubbing;
-(SXAnimatedImage *)animatedImage;
-(void)setAnimatedImage:(SXAnimatedImage *)arg1 ;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(void)setLoadingIndicatorStyle:(long long)arg1 ;
-(long long)loadingIndicatorStyle;
-(CGSize)preferredImageSize;
-(BOOL)shouldShowLoadingIndicator;
-(id<SXResourceDataSource>)resourceDataSource;
-(void)animatedImage:(id)arg1 madeImageAvailableForFrameAtIndex:(unsigned long long)arg2 ;
-(NSTimer *)activeTimer;
-(void)setActiveTimer:(NSTimer *)arg1 ;
-(void)layoutActivityIndicator;
-(BOOL)hasLoadedImage;
-(NSMapTable *)interestTable;
-(void)giveUpInterestForObject:(id)arg1 ;
-(void)addInterestInImageQuality:(int)arg1 forObject:(id)arg2 ;
-(void)validateLoadedImage;
-(BOOL)prefersHighQuality;
-(UIImage *)highQualityImage;
-(void)setHighQualityImage:(UIImage *)arg1 ;
-(BOOL)hasInterest;
-(id)preferredQualityImageRequestCancelHandler;
-(void)setPreferredQualityImageRequestCancelHandler:(id)arg1 ;
-(void)setPreferredQualityLoadingImageSize:(CGSize)arg1 ;
-(id)highQualityImageRequestCancelHandler;
-(void)setHighQualityImageRequestCancelHandler:(id)arg1 ;
-(BOOL)containsAnimatedImage;
-(unsigned long long)preferredQualityInterest;
-(unsigned long long)highQualityInterest;
-(void)loadHighQualityImage;
-(void)crossfadeToImage:(id)arg1 ;
-(UIImage *)preferredQualityImage;
-(CGSize)preferredQualityLoadingImageSize;
-(void)loadPreferredQualityImage;
-(void)didLoadAnimatedImage:(id)arg1 ;
-(void)setPreferredQualityImage:(UIImage *)arg1 ;
-(void)fadeInImageWhenVisible:(id)arg1 ;
-(SXImageResource *)imageResource;
-(UILongPressGestureRecognizer *)scrubGesture;
-(void)handleScrubGesture:(id)arg1 ;
-(void)setScrubGesture:(UILongPressGestureRecognizer *)arg1 ;
-(unsigned long long)frameIndex;
-(void)setFrameIndex:(unsigned long long)arg1 allowNearest:(BOOL)arg2 ;
-(BOOL)autoPlayEnabled;
-(void)setShouldResume:(BOOL)arg1 ;
-(BOOL)shouldResume;
-(BOOL)scrubbingEnabled;
-(BOOL)shouldResumeAfterLoad;
-(void)setShouldResumeAfterLoad:(BOOL)arg1 ;
-(id)frameChangeBlock;
-(void)showNextFrame;
-(void)setIntendedFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)intendedFrameIndex;
-(id)supportedCustomRotors;
-(id)itemsForCustomRotor:(id)arg1 ;
-(void)didStartDragging;
-(void)didEndDragging;
-(id)stringForAXDragAction;
-(id<NSItemProviderWriting>)dragObject;
-(NSString *)dragIdentifier;
-(UIView *)dragPreviewView;
-(id)initWithImageResource:(id)arg1 resourceDataSource:(id)arg2 reachabilityProvider:(id)arg3 ;
-(void)setShouldShowLoadingIndicator:(BOOL)arg1 ;
-(BOOL)objectHasQualityInterest:(id)arg1 quality:(int*)arg2 ;
-(CGSize)loadedImageSize;
-(void)setPreferredImageSize:(CGSize)arg1 ;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(void)setFrameIndex:(unsigned long long)arg1 ;
-(void)setFrameChangeBlock:(id)arg1 ;
-(void)setAutoPlayEnabled:(BOOL)arg1 ;
-(id<SXReachabilityProvider>)reachabilityProvider;
-(void)setPreferredQualityInterest:(unsigned long long)arg1 ;
-(void)setHighQualityInterest:(unsigned long long)arg1 ;
-(void)setInterestTable:(NSMapTable *)arg1 ;
-(void)dealloc;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)setDelegate:(id<SXImageViewDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)layoutSubviews;
-(id<SXImageViewDelegate>)delegate;
-(BOOL)isVisible;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)resume;
-(void)setPreviousPoint:(CGPoint)arg1 ;
-(CGPoint)previousPoint;
-(void)pause;
-(BOOL)paused;
@end

