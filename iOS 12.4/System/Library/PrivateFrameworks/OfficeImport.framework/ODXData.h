/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODXData : NSObject
+(id)readPointListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)readConnectionListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)associatePresentationsInIdMap:(id)arg1 ;
+(id)readPointFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readPointTypeFromNode:(xmlNode*)arg1 ;
+(void)readConnectionFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readConnectionTypeFromNode:(xmlNode*)arg1 ;
+(void)readNode:(xmlNode*)arg1 toDiagram:(id)arg2 state:(id)arg3 ;
+(id)readModelIdentifierFromNode:(xmlNode*)arg1 attributeName:(const char*)arg2 ;
@end

