/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol CKAppManagerAppTableViewCellDelegate;
@class UISwitch;

@interface CKAppManagerAppTableViewCell : UITableViewCell {

	id<CKAppManagerAppTableViewCellDelegate> _delegate;
	UISwitch* _appToggle;

}

@property (assign,nonatomic,__weak) id<CKAppManagerAppTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISwitch * appToggle;                                                  //@synthesize appToggle=_appToggle - In the implementation block
+(id)reuseIdentifier;
-(id<CKAppManagerAppTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<CKAppManagerAppTableViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(void)layoutMarginsDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setToggleVisible:(BOOL)arg1 editable:(BOOL)arg2 isOn:(BOOL)arg3 ;
-(UISwitch *)appToggle;
-(void)appToggleTapped:(id)arg1 ;
-(void)setAppToggle:(UISwitch *)arg1 ;
-(void)updateCellWithPluginInfo:(id)arg1 ;
@end

