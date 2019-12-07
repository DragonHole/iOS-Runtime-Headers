/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, PSTextEditingCell, UITextField, NSString;

@interface PSTextEditingPane : PSEditingPane <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	PSTextEditingCell* _cell;
	UITextField* _textField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 ;
-(id)preferenceValue;
@end
