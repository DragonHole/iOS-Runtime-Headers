/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXDocumentStyleRenderer.h>

@protocol SXDocumentStyleRenderer <NSObject>
@required
-(void)applyStyle:(id)arg1 onView:(id)arg2;

@end


@protocol SXImageFillViewFactory, SXVideoFillViewFactory, SXGradientFactory;
@class SXViewport, UIView, SXGradientFillView, SXImageFillView, SXVideoFillView, SXFillView, NSString;

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer> {

	id<SXImageFillViewFactory> _imageFillViewFactory;
	id<SXVideoFillViewFactory> _videoFillViewFactory;
	SXViewport* _viewport;
	id<SXGradientFactory> _gradientFactory;
	UIView* _topBackgroundView;
	SXGradientFillView* _gradientFillView;
	SXImageFillView* _imageFillView;
	SXVideoFillView* _videoFillView;
	SXFillView* _fillView;

}

@property (nonatomic,readonly) id<SXImageFillViewFactory> imageFillViewFactory;              //@synthesize imageFillViewFactory=_imageFillViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXVideoFillViewFactory> videoFillViewFactory;              //@synthesize videoFillViewFactory=_videoFillViewFactory - In the implementation block
@property (nonatomic,readonly) SXViewport * viewport;                                        //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) id<SXGradientFactory> gradientFactory;                        //@synthesize gradientFactory=_gradientFactory - In the implementation block
@property (nonatomic,retain) UIView * topBackgroundView;                                     //@synthesize topBackgroundView=_topBackgroundView - In the implementation block
@property (nonatomic,retain) SXGradientFillView * gradientFillView;                          //@synthesize gradientFillView=_gradientFillView - In the implementation block
@property (nonatomic,retain) SXImageFillView * imageFillView;                                //@synthesize imageFillView=_imageFillView - In the implementation block
@property (nonatomic,retain) SXVideoFillView * videoFillView;                                //@synthesize videoFillView=_videoFillView - In the implementation block
@property (nonatomic,retain) SXFillView * fillView;                                          //@synthesize fillView=_fillView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(void)setTopBackgroundView:(UIView *)arg1 ;
-(UIView *)topBackgroundView;
-(void)applyStyle:(id)arg1 onView:(id)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(SXFillView *)fillView;
-(void)setFillView:(SXFillView *)arg1 ;
-(void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2 ;
-(void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2 ;
-(void)applyFillForStyle:(id)arg1 onView:(id)arg2 ;
-(id<SXGradientFactory>)gradientFactory;
-(void)layoutTopBackgroundView;
-(id)viewForFill:(id)arg1 ;
-(void)layoutFillView;
-(id)videoPlayerViewForFill:(id)arg1 ;
-(id)imageViewForFill:(id)arg1 ;
-(id)gradientViewForFill:(id)arg1 ;
-(SXGradientFillView *)gradientFillView;
-(void)setGradientFillView:(SXGradientFillView *)arg1 ;
-(SXImageFillView *)imageFillView;
-(id<SXImageFillViewFactory>)imageFillViewFactory;
-(void)setImageFillView:(SXImageFillView *)arg1 ;
-(SXVideoFillView *)videoFillView;
-(id<SXVideoFillViewFactory>)videoFillViewFactory;
-(void)setVideoFillView:(SXVideoFillView *)arg1 ;
-(id)initWithViewport:(id)arg1 imageFillViewFactory:(id)arg2 videoFillViewFactory:(id)arg3 gradientFactory:(id)arg4 ;
@end

