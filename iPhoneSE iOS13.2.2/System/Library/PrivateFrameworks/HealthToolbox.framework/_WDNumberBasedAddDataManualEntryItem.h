/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthToolbox/WDAddDataManualEntryItem.h>
#import <libobjc.A.dylib/WDManualDataEntryTableViewCellDelegate.h>

@class WDManualDataEntryTableViewCell, NSNumberFormatter;

@interface _WDNumberBasedAddDataManualEntryItem : WDAddDataManualEntryItem <WDManualDataEntryTableViewCellDelegate> {

	WDManualDataEntryTableViewCell* _tableViewCell;
	unsigned long long _manualEntryType;
	NSNumberFormatter* _numberFormatter;

}

@property (assign,nonatomic) unsigned long long manualEntryType;               //@synthesize manualEntryType=_manualEntryType - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
-(void)beginEditing;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setValue:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)tableViewCells;
-(id)generateValue;
-(void)setManualEntryType:(unsigned long long)arg1 ;
-(void)manualDataEntryTableViewCell:(id)arg1 valueDidChangeToValue:(id)arg2 ;
-(unsigned long long)manualEntryType;
@end

