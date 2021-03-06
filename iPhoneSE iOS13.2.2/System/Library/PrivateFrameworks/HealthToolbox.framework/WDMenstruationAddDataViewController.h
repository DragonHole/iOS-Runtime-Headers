/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthToolbox/WDCategoryAddDataViewController.h>
#import <libobjc.A.dylib/WDAddDataManualEntrySpinnerDataSource.h>

@class WDAddDataManualEntrySpinner, NSString;

@interface WDMenstruationAddDataViewController : WDCategoryAddDataViewController <WDAddDataManualEntrySpinnerDataSource> {

	WDAddDataManualEntrySpinner* _isStartOfCycleEntryItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfSections;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(id)defaultMetadata;
-(long long)numberOfRowsInManualEntrySpinner:(id)arg1 ;
-(id)manualEntrySpinner:(id)arg1 titleForRow:(long long)arg2 ;
-(id)manualEntryItemsForSection:(long long)arg1 ;
-(BOOL)useSingleStartAndEndDate;
@end

