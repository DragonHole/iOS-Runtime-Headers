/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPreviewInteraction, NSString;

@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	UIPreviewInteraction* _previewInteraction;

}

@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction;              //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(id)initWithPreviewInteraction:(id)arg1 ;
-(void)setStateToFailed;
-(void)setStateToRecognized;
-(UIPreviewInteraction *)previewInteraction;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
@end

