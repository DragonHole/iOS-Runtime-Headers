/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EDPivotDataField : NSObject {

	long long mBaseField;
	unsigned long long mBaseItem;
	unsigned long long mFieldId;
	unsigned long long mNumFmtId;
	NSString* mName;
	int mFormat;

}
+(id)pivotDataField;
-(unsigned long long)numFmtId;
-(void)setNumFmtId:(unsigned long long)arg1 ;
-(long long)baseField;
-(void)setBaseField:(long long)arg1 ;
-(unsigned long long)baseItem;
-(void)setBaseItem:(unsigned long long)arg1 ;
-(unsigned long long)fieldId;
-(void)setFieldId:(unsigned long long)arg1 ;
-(int)showDataAs;
-(void)setShowDataAs:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)description;
@end

