/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUItemCellConfiguration.h>

@interface SUPlainTextCellConfiguration : SUItemCellConfiguration
+(double)rowHeightForContext:(id)arg1 representedObject:(id)arg2 ;
-(id)init;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1 ;
-(BOOL)getShadowColor:(id*)arg1 offset:(CGSize*)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4 ;
-(id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
@end
