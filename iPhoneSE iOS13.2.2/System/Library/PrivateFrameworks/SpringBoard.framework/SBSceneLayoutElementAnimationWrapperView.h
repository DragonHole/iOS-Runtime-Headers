/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBSceneLayoutInterfaceOrientedView.h>

@class SBLayoutElement, SBApplicationSceneView, SBOrientationTransformWrapperView, NSString;

@interface SBSceneLayoutElementAnimationWrapperView : UIView <SBSceneLayoutInterfaceOrientedView> {

	SBLayoutElement* _layoutElement;
	SBApplicationSceneView* _appView;
	SBOrientationTransformWrapperView* _orientedView;

}

@property (nonatomic,readonly) SBLayoutElement * layoutElement;               //@synthesize layoutElement=_layoutElement - In the implementation block
@property (nonatomic,readonly) SBApplicationSceneView * appView;              //@synthesize appView=_appView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long layoutOrientation; 
-(NSString *)description;
-(void)invalidate;
-(long long)layoutOrientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)addContentView:(id)arg1 ;
-(SBApplicationSceneView *)appView;
-(SBLayoutElement *)layoutElement;
-(id)initWithLayoutElement:(id)arg1 appView:(id)arg2 ;
@end
