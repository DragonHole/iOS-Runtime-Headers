/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDBlock.h>

@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {

	WDTableProperties* mProperties;
	NSMutableArray* mRows;

}
-(int)blockType;
-(id)rowAt:(unsigned long long)arg1 ;
-(id)addRow;
-(int)nestingLevel;
-(id)rowIterator;
-(id)newRowIterator;
-(id)cellIterator;
-(id)newCellIterator;
-(void)clearProperties;
-(id)insertRowAtIndex:(unsigned long long)arg1 ;
-(void)clearRows;
-(id)runIterator;
-(id)newRunIterator;
-(void)dealloc;
-(id)description;
-(id)initWithText:(id)arg1 ;
-(id)properties;
-(unsigned long long)rowCount;
@end

