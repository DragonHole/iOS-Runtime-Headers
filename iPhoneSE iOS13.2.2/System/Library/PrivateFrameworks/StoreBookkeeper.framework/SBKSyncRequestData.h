/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKRequestData.h>

@interface SBKSyncRequestData : SBKRequestData
-(id)syncTransaction;
-(id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableConflictDetectionValue;
-(BOOL)_needsConflictDetection;
-(id)_serializableConflictDetectionOrdinalForKey:(id)arg1 ;
-(id)serializableRequestBodyPropertyList;
@end

