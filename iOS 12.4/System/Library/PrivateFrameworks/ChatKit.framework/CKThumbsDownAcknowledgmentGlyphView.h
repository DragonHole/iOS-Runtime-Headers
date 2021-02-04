/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKSimpleAcknowledgementGlyphView.h>

@class CALayer;

@interface CKThumbsDownAcknowledgmentGlyphView : CKSimpleAcknowledgementGlyphView {

	CALayer* _animationLayer;
	CALayer* _contentLayer;

}

@property (nonatomic,retain) CALayer * animationLayer;              //@synthesize animationLayer=_animationLayer - In the implementation block
@property (nonatomic,retain) CALayer * contentLayer;                //@synthesize contentLayer=_contentLayer - In the implementation block
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)acknowledgmentType;
-(void)setGlyphColor:(id)arg1 ;
-(CALayer *)animationLayer;
-(void)setAnimationLayer:(CALayer *)arg1 ;
-(void)setContentLayer:(CALayer *)arg1 ;
-(CALayer *)contentLayer;
-(double)animationDuration;
@end
