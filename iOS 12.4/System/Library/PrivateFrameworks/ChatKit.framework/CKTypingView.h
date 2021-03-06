/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol IMTypingIndicatorLayerProtocol;
@class CALayer;

@interface CKTypingView : UIView {

	CALayer*<IMTypingIndicatorLayerProtocol> _indicatorLayer;

}

@property (nonatomic,retain) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer;              //@synthesize indicatorLayer=_indicatorLayer - In the implementation block
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
@end

