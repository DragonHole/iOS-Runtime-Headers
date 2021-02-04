/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIRemoteView, BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle;

@interface PGLayerHostView : UIView {

	_UIRemoteView* _remoteView;
	BKSTouchDeliveryPolicyAssertion* _touchDeliveryPolicyAssertion;

}

@property (nonatomic,retain) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
@property (assign,nonatomic) CGAffineTransform layerHostTransform; 
-(void)_manageSharingOfTouchesBetweenClientAndHostContext;
-(CGAffineTransform)layerHostTransform;
-(void)setLayerHostTransform:(CGAffineTransform)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setHostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg1 ;
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
@end
