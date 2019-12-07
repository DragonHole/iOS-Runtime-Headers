/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAContainerProvider.h>

@interface _DAABLegacyContainerProvider : DAContainerProvider {

	void* _addressBook;

}

@property (nonatomic,readonly) void* addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(void)dealloc;
-(id)allContainers;
-(id)initWithAddressBook:(void*)arg1 ;
-(void*)addressBook;
-(id)allContainersForAccountWithExternalIdentifier:(id)arg1 ;
-(id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2 ;
-(id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(BOOL)arg6 propertiesReadonly:(BOOL)arg7 forAccount:(id)arg8 ;
-(void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(BOOL)arg3 ;
-(void)mergeAllRecordsIntoContainer:(id)arg1 shouldInsertChangeHistoryRecords:(BOOL)arg2 ;
-(BOOL)setLastSyncDateForContainer:(id)arg1 ;
@end
