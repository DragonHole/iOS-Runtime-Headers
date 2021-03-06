/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface CKAcknowledgmentGlyphView : UIView {

	double _animationDuration;
	UIColor* _glyphColor;
	CGPoint _glyphOffset;

}

@property (nonatomic,readonly) long long acknowledgmentType; 
@property (nonatomic,readonly) CGPoint glyphOffset;                       //@synthesize glyphOffset=_glyphOffset - In the implementation block
@property (nonatomic,readonly) double animationDuration;                  //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                        //@synthesize glyphColor=_glyphColor - In the implementation block
+(id)glyphViewForAcknowledgmentType:(long long)arg1 glyphColor:(char)arg2 ;
+(void)cacheGlyphView:(id)arg1 ;
+(id)viewCache;
-(CGPoint)glyphOffset;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)acknowledgmentType;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(UIColor *)glyphColor;
-(double)animationDuration;
@end

