/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WDProfile, UITableView;


@protocol WDTableViewSectionDelegate <NSObject>
@property (nonatomic,retain) WDProfile * profile; 
@property (nonatomic,retain) UITableView * tableView; 
@required
-(WDProfile *)profile;
-(void)setProfile:(id)arg1;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(UITableView *)tableView;
-(void)setTableView:(id)arg1;
-(id)indexPathForCell:(id)arg1;
-(void)reloadSection:(unsigned long long)arg1 animated:(BOOL)arg2;
-(void)reloadTable;
-(void)pushViewController:(id)arg1;
-(void)sectionAddedChildViewController:(id)arg1;

@end

