/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel, UIView;

@interface SafariSavedPasswordTableCell : PSTableCell {

	UILabel* _monogramLabel;
	UIView* _monogramBackgroundView;

}
+(long long)cellStyle;
+(void)setSearchPattern:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2 ;
-(void)safari_copyUserName:(id)arg1 ;
-(void)safari_copyPassword:(id)arg1 ;
-(id)_savedPassword;
-(id)_warningImage;
-(void)setPasswordIcon:(id)arg1 ;
@end
