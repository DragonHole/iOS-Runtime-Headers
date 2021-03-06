/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDraggingSessionConfiguration.h>

@class UIView, NSArray;

@interface UIDraggingBeginningSessionConfiguration : UIDraggingSessionConfiguration {

	long long _dataOwner;
	UIView* _sourceView;
	NSArray* _items;
	CGPoint _initialCentroidInSourceWindow;

}

@property (assign,nonatomic) CGPoint initialCentroidInSourceWindow;              //@synthesize initialCentroidInSourceWindow=_initialCentroidInSourceWindow - In the implementation block
@property (nonatomic,readonly) long long dataOwner;                              //@synthesize dataOwner=_dataOwner - In the implementation block
@property (nonatomic,readonly) UIView * sourceView;                              //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                  //@synthesize items=_items - In the implementation block
+(id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 initialCentroidInSourceWindow:(CGPoint)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5 accessibilityEndpoint:(id)arg6 ;
+(id)configurationWithItems:(id)arg1 dataOwner:(long long)arg2 touches:(id)arg3 requiredContextIds:(id)arg4 sourceView:(id)arg5 ;
-(NSArray *)items;
-(UIView *)sourceView;
-(long long)dataOwner;
-(CGPoint)initialCentroidInSourceWindow;
-(id)initWithItems:(id)arg1 dataOwner:(long long)arg2 requiredContextIds:(id)arg3 sourceView:(id)arg4 ;
-(void)setInitialCentroidInSourceWindow:(CGPoint)arg1 ;
@end

