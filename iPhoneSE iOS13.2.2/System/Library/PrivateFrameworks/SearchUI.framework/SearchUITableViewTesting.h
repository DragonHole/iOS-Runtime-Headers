/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SearchUITableViewTesting <NSObject>
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
@required
-(id)navigationController;
-(id)tableViewWillUpdateHandler;
-(id)tableViewDidUpdateHandler;
-(id)cellWillDisplayHandler;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(void)performScrollTestWithCompletion:(/*^block*/id)arg1;
-(id)currentTableModel;
-(void)toggleShowMoreForSection:(unsigned long long)arg1;
-(CGRect*)scrollToIndexPath:(id)arg1;
-(void)tapAtIndexPath:(id)arg1;
-(void)setCellWillDisplayHandler:(/*^block*/id)arg1;
-(void)setTableViewWillUpdateHandler:(/*^block*/id)arg1;
-(void)setTableViewDidUpdateHandler:(/*^block*/id)arg1;

@end

