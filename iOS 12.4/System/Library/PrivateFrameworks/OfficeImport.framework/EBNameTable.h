/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBNameTable : NSObject
+(id)edNameFromXlName:(XlName*)arg1 name:(OcText*)arg2 state:(id)arg3 ;
+(XlName*)xlNameFromEDName:(id)arg1 state:(id)arg2 ;
+(void)readFromState:(id)arg1 ;
+(XlNameTable*)createXlNameTableFromNamesCollection:(id)arg1 state:(id)arg2 ;
@end

