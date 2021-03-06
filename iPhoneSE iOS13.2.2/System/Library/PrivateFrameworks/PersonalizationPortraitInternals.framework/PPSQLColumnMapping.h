/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSString;

@interface PPSQLColumnMapping : NSObject {

	const PPCompactStringArrayRef _columnAliases;
	const PPCompactStringArrayRef _tableColumnNamesFromSchema;
	NSString* _uniqueTableName;

}
-(void)dealloc;
-(id)initWithStatement:(id)arg1 ;
-(int)indexForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(int)indexForColumnAlias:(const char*)arg1 ;
@end

