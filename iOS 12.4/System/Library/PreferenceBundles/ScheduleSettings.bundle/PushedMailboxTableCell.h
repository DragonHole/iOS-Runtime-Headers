/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PreferenceBundles/ScheduleSettings.bundle/ScheduleSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIImageView;

@interface PushedMailboxTableCell : UITableViewCell {

	UILabel* _mailboxName;
	UIImageView* _mailboxIcon;
	unsigned _level;

}

@property (assign,nonatomic) unsigned level;              //@synthesize level=_level - In the implementation block
+(int)_cacheIndexForType:(int)arg1 ;
+(id)_iconForType:(int)arg1 nested:(BOOL)arg2 ;
-(void)_setupMailFolderIconForImage:(id)arg1 ;
-(void)setMailboxName:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setType:(int)arg1 ;
-(void)prepareForReuse;
-(void)setLevel:(unsigned)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(unsigned)level;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
@end
