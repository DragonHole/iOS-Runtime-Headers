/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TLKObserver.h>
#import <libobjc.A.dylib/TLKObservable.h>

@protocol TLKObserver;
@class UIView, NSString;

@interface TLKView : UIView <TLKObserver, TLKObservable> {

	BOOL inBatchUpdate;
	id<TLKObserver> observer;
	unsigned long long _style;
	UIView* _containerView;

}

@property (retain) UIView * containerView;                          //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (assign) BOOL inBatchUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<TLKObserver> observer; 
+(void)enableShadow:(BOOL)arg1 forView:(id)arg2 ;
+(void)makeContainerShadowCompatible:(id)arg1 ;
+(UIEdgeInsets)defaultInsets;
+(Class)layerClass;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)setContainerWithDefaultInsets:(id)arg1 ;
-(BOOL)inBatchUpdate;
-(void)propertiesDidChange;
-(void)styleDidChange:(unsigned long long)arg1 ;
-(void)observedPropertiesChanged;
-(void)setContainer:(id)arg1 withInsets:(UIEdgeInsets)arg2 ;
-(void)setInBatchUpdate:(BOOL)arg1 ;
-(void)disableUnbatchedUpdates;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(BOOL)supportsAsynchronousMeasurement;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)layoutMarginsDidChange;
-(CGSize)intrinsicContentSize;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setObserver:(id<TLKObserver>)arg1 ;
-(id<TLKObserver>)observer;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
@end

