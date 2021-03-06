/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class PKCloudRecordObject, PKPaymentTransaction, PKCloudStoreService, NSMutableDictionary, NSMutableSet;

@interface PKTransactionCloudKitDebugDetailsViewController : UITableViewController {

	PKCloudRecordObject* _cloudRecordObject;
	PKPaymentTransaction* _transaction;
	PKCloudStoreService* _cloudStoreService;
	BOOL _loadingCloudRecordObject;
	BOOL _inBridge;
	NSMutableDictionary* _keysForRecordName;
	NSMutableDictionary* _valuesForRecordName;
	NSMutableSet* _cloudStoreObjectHandlers;

}
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)initWithTransaction:(id)arg1 ;
-(void)cloudRecordObjectDescriptionWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadCloudData;
-(id)_recordNameForSection:(long long)arg1 ;
-(id)_recordForSection:(long long)arg1 ;
-(id)_cellWithTitleText:(id)arg1 valueText:(id)arg2 ;
-(void)_processCloudRecords;
-(void)_callCloudRecordObjectDescriptionBlocks;
@end

