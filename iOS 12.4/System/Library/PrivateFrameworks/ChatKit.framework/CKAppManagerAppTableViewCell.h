/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(void)setToggleVisible:(BOOL)arg1 editable:(BOOL)arg2 isOn:(BOOL)arg3 ;
-(UISwitch *)appToggle;
-(void)appToggleTapped:(id)arg1 ;
-(void)setAppToggle:(UISwitch *)arg1 ;
-(void)updateCellWithPluginInfo:(id)arg1 ;
-(void)setDelegate:(id<CKAppManagerAppTableViewCellDelegate>)arg1 ;
-(id<CKAppManagerAppTableViewCellDelegate>)delegate;
-(void)layoutMarginsDidChange;
-(void)prepareForReuse;
@end
