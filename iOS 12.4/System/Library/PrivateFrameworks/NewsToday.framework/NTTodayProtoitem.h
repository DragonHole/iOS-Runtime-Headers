/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NTTodayProtoitem <NFCopying>
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(BOOL)arg2;
-(id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 forLeadingCellAppearance:(BOOL)arg6 preferredDynamicSlotAllocation:(unsigned long long)arg7;
-(NSString *)identifier;

@end
