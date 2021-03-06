/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDTableRow, WDTableCellProperties, WDText, NSString;

@interface WDTableCell : NSObject {

	unsigned long long mIndex;
	WDTableRow* mRow;
	WDTableCellProperties* mProperties;
	WDText* mText;
	NSString* mIdentifier;
	BOOL mUseTrackedProperties;

}
-(void)clearProperties;
-(BOOL)useTrackedProperties;
-(void)setUseTrackedProperties:(BOOL)arg1 ;
-(id)initWithRow:(id)arg1 at:(unsigned long long)arg2 ;
-(long long)compareIndex:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(id)description;
-(id)text;
-(id)row;
-(void)setIdentifier:(id)arg1 ;
-(unsigned long long)index;
-(id)properties;
@end

