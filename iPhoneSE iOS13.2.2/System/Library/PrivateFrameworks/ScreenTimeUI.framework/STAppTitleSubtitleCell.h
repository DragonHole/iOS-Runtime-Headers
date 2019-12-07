/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@interface STAppTitleSubtitleCell : PSTableCell {

	BOOL _hasSubtitle;

}

@property (assign,nonatomic) BOOL hasSubtitle;              //@synthesize hasSubtitle=_hasSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL isAppCell; 
+(long long)cellStyle;
-(void)layoutSubviews;
-(void)setSpecifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)hasSubtitle;
-(void)_didFetchAppInfoOrIcon:(id)arg1 ;
-(BOOL)isAppCell;
-(void)setHasSubtitle:(BOOL)arg1 ;
@end
