/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIIndexBarVisualStyle.h>

@class UIIndexBarView, NSString;

@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle> {

	UIIndexBarView* _indexBarView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIIndexBarView * indexBarView;              //@synthesize indexBarView=_indexBarView - In the implementation block
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) BOOL overlay; 
@property (nonatomic,readonly) double minLineHeight; 
@property (assign,nonatomic) BOOL expanded; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canBecomeFocused;
-(id)initWithView:(id)arg1 ;
-(UIIndexBarView *)indexBarView;
-(BOOL)overlay;
-(double)minLineHeight;
-(id)displayEntryFromEntry:(id)arg1 ;
-(void)setIndexBarView:(UIIndexBarView *)arg1 ;
@end

