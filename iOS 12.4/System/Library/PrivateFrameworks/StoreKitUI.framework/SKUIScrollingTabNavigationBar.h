/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <iTunesStoreUI/SUNavigationBar.h>
#import <libobjc.A.dylib/SKUIPositionAdjusting.h>

@class NSString;

@interface SKUIScrollingTabNavigationBar : SUNavigationBar <SKUIPositionAdjusting> {

	UIOffset _positionOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIOffset positionOffset; 
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(UIOffset)positionOffset;
-(void)setPositionOffset:(UIOffset)arg1 ;
@end

