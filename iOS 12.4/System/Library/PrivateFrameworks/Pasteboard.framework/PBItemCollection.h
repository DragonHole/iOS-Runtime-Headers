/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pasteboard/Pasteboard-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PBItemDataTransferDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol PBItemCollectionDataTransferDelegate;
@class NSDate, NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSArray, NSDictionary, NSUUID, NSString;

@interface PBItemCollection : NSObject <NSXPCListenerDelegate, PBItemDataTransferDelegate, NSSecureCoding> {

	BOOL _itemQueue_isDataProvider;
	BOOL _itemQueue_deviceLockedPasteboard;
	NSDate* _creationDate;
	NSXPCListener* _itemQueue_dataConsumersListener;
	NSXPCListenerEndpoint* _itemQueue_remoteDataProviderEndpoint;
	NSXPCConnection* _itemQueue_remoteDataProviderConnection;
	NSArray* _itemQueue_items;
	NSDictionary* _itemQueue_metadata;
	NSDictionary* _itemQueue_privateMetadata;
	NSUUID* _itemQueue_UUID;
	NSString* _itemQueue_originatorBundleID;
	NSString* _itemQueue_originatorTeamID;
	long long _itemQueue_originatorDataOwner;
	long long _itemQueue_remotePasteboardState;
	id<PBItemCollectionDataTransferDelegate> _itemQueue_dataTransferDelegate;

}

@property (nonatomic,copy) NSString * name; 
@property (getter=isSystemPasteboard,nonatomic,readonly) BOOL systemPasteboard; 
@property (assign,nonatomic) long long changeCount; 
@property (nonatomic,readonly) BOOL isGeneralPasteboard; 
@property (assign,getter=isPersistent,nonatomic) BOOL persistent; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (assign,getter=isLocalOnly,nonatomic) BOOL localOnly; 
@property (nonatomic,retain) NSXPCListener * itemQueue_dataConsumersListener;                                              //@synthesize itemQueue_dataConsumersListener=_itemQueue_dataConsumersListener - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * itemQueue_remoteDataProviderEndpoint;                                 //@synthesize itemQueue_remoteDataProviderEndpoint=_itemQueue_remoteDataProviderEndpoint - In the implementation block
@property (nonatomic,retain) NSXPCConnection * itemQueue_remoteDataProviderConnection;                                     //@synthesize itemQueue_remoteDataProviderConnection=_itemQueue_remoteDataProviderConnection - In the implementation block
@property (nonatomic,copy) NSArray * itemQueue_items;                                                                      //@synthesize itemQueue_items=_itemQueue_items - In the implementation block
@property (nonatomic,copy) NSDictionary * itemQueue_metadata;                                                              //@synthesize itemQueue_metadata=_itemQueue_metadata - In the implementation block
@property (nonatomic,retain) NSDictionary * itemQueue_privateMetadata;                                                     //@synthesize itemQueue_privateMetadata=_itemQueue_privateMetadata - In the implementation block
@property (nonatomic,retain) NSUUID * itemQueue_UUID;                                                                      //@synthesize itemQueue_UUID=_itemQueue_UUID - In the implementation block
@property (assign,nonatomic) BOOL itemQueue_isDataProvider;                                                                //@synthesize itemQueue_isDataProvider=_itemQueue_isDataProvider - In the implementation block
@property (nonatomic,copy) NSString * itemQueue_originatorBundleID;                                                        //@synthesize itemQueue_originatorBundleID=_itemQueue_originatorBundleID - In the implementation block
@property (nonatomic,copy) NSString * itemQueue_originatorTeamID;                                                          //@synthesize itemQueue_originatorTeamID=_itemQueue_originatorTeamID - In the implementation block
@property (assign,nonatomic) long long itemQueue_originatorDataOwner;                                                      //@synthesize itemQueue_originatorDataOwner=_itemQueue_originatorDataOwner - In the implementation block
@property (assign,getter=itemQueue_isDeviceLockedPasteboard,nonatomic) BOOL itemQueue_deviceLockedPasteboard;              //@synthesize itemQueue_deviceLockedPasteboard=_itemQueue_deviceLockedPasteboard - In the implementation block
@property (assign,nonatomic) long long itemQueue_remotePasteboardState;                                                    //@synthesize itemQueue_remotePasteboardState=_itemQueue_remotePasteboardState - In the implementation block
@property (assign,nonatomic,__weak) id<PBItemCollectionDataTransferDelegate> itemQueue_dataTransferDelegate;               //@synthesize itemQueue_dataTransferDelegate=_itemQueue_dataTransferDelegate - In the implementation block
@property (assign,getter=isDeviceLockedPasteboard,nonatomic) BOOL deviceLockedPasteboard; 
@property (nonatomic,copy,readonly) NSString * persistenceName; 
@property (assign,nonatomic) BOOL isRemote; 
@property (getter=isRemoteMetadataLoaded,nonatomic,readonly) BOOL remoteMetadataLoaded; 
@property (getter=isRemoteDataLoaded,nonatomic,readonly) BOOL remoteDataLoaded; 
@property (nonatomic,retain) NSDictionary * privateMetadata; 
@property (nonatomic,readonly) BOOL isDataProvider; 
@property (nonatomic,readonly) NSUUID * UUID; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * dataConsumersEndpoint; 
@property (nonatomic,copy,readonly) NSString * originatorBundleID; 
@property (nonatomic,copy,readonly) NSString * originatorTeamID; 
@property (assign,nonatomic) long long originatorDataOwner; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,readonly) NSDate * creationDate;                                                                      //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic,__weak) id<PBItemCollectionDataTransferDelegate> dataTransferDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)allowedClassesForSecureCoding;
-(id<PBItemCollectionDataTransferDelegate>)dataTransferDelegate;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDate *)creationDate;
-(void)shutdown;
-(void)setUsesServerConnectionToLoadData;
-(NSDictionary *)itemQueue_metadata;
-(void)setItemQueue_metadata:(NSDictionary *)arg1 ;
-(NSDictionary *)itemQueue_privateMetadata;
-(void)setItemQueue_privateMetadata:(NSDictionary *)arg1 ;
-(void)item:(id)arg1 representation:(id)arg2 beganDataTransferWithProgress:(id)arg3 ;
-(void)item:(id)arg1 representationFinishedDataTransfer:(id)arg2 ;
-(NSDictionary *)privateMetadata;
-(void)setPrivateMetadata:(NSDictionary *)arg1 ;
-(id<PBItemCollectionDataTransferDelegate>)itemQueue_dataTransferDelegate;
-(void)setItemQueue_dataTransferDelegate:(id<PBItemCollectionDataTransferDelegate>)arg1 ;
-(NSArray *)itemQueue_items;
-(void)setItemQueue_items:(NSArray *)arg1 ;
-(void)setItemQueue_UUID:(NSUUID *)arg1 ;
-(NSUUID *)itemQueue_UUID;
-(id)dataConsumersListener;
-(BOOL)itemQueue_isDataProvider;
-(NSString *)itemQueue_originatorBundleID;
-(void)setItemQueue_originatorBundleID:(NSString *)arg1 ;
-(NSString *)itemQueue_originatorTeamID;
-(void)setItemQueue_originatorTeamID:(NSString *)arg1 ;
-(long long)itemQueue_originatorDataOwner;
-(void)setItemQueue_originatorDataOwner:(long long)arg1 ;
-(BOOL)itemQueue_isDeviceLockedPasteboard;
-(void)setItemQueue_deviceLockedPasteboard:(BOOL)arg1 ;
-(NSXPCListener *)itemQueue_dataConsumersListener;
-(void)setItemQueue_remoteDataProviderEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setItemQueue_remoteDataProviderConnection:(NSXPCConnection *)arg1 ;
-(id)_remoteDataProviderConnection;
-(NSXPCConnection *)itemQueue_remoteDataProviderConnection;
-(NSXPCListenerEndpoint *)itemQueue_remoteDataProviderEndpoint;
-(long long)itemQueue_remotePasteboardState;
-(void)setItemQueue_remotePasteboardState:(long long)arg1 ;
-(BOOL)isSystemPasteboard;
-(NSString *)persistenceName;
-(NSString *)originatorTeamID;
-(BOOL)isDataProvider;
-(void)setOriginatorBundleID:(NSString *)arg1 ;
-(void)setOriginatorTeamID:(NSString *)arg1 ;
-(BOOL)isDeviceLockedPasteboard;
-(void)setDeviceLockedPasteboard:(BOOL)arg1 ;
-(SCD_Struct_PB0)establishConnectionToDataProviderCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyWithDoNothingLoaders;
-(BOOL)hasItemWithRepresentationOfType:(id)arg1 ;
-(BOOL)hasItemWithRepresentationConformingToType:(id)arg1 ;
-(BOOL)isRemoteMetadataLoaded;
-(void)setRemoteMetadataLoaded;
-(BOOL)isRemoteDataLoaded;
-(void)setRemoteDataLoaded;
-(void)setItemQueue_dataConsumersListener:(NSXPCListener *)arg1 ;
-(void)setItemQueue_isDataProvider:(BOOL)arg1 ;
-(BOOL)isGeneralPasteboard;
-(void)setIsRemote:(BOOL)arg1 ;
-(NSString *)originatorBundleID;
-(id)init;
-(void)dealloc;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)changeCount;
-(void)setChangeCount:(long long)arg1 ;
-(void)addItems:(id)arg1 ;
-(NSDictionary *)metadata;
-(long long)originatorDataOwner;
-(void)setDataTransferDelegate:(id<PBItemCollectionDataTransferDelegate>)arg1 ;
-(void)setOriginatorDataOwner:(long long)arg1 ;
-(NSXPCListenerEndpoint *)dataConsumersEndpoint;
-(void)setDataProviderEndpoint:(id)arg1 ;
-(void)waitForItemRequestsDeliveryCompletion:(/*^block*/id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(BOOL)isRemote;
-(void)_setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)canInstantiateObjectOfClass:(Class)arg1 ;
-(BOOL)isPersistent;
-(void)setPersistent:(BOOL)arg1 ;
-(BOOL)isLocalOnly;
-(void)setLocalOnly:(BOOL)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)availableRepresentationTypes;
-(id)copyWithItems:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

