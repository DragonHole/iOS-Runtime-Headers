/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CNContactStore, NSCache, NSObject;

@interface SearchUIContactStore : NSObject {

	CNContactStore* _contactStore;
	NSCache* _contactCache;
	NSObject*<OS_dispatch_queue> _contactFetchingQueue;

}

@property (nonatomic,retain) NSCache * contactCache;                                         //@synthesize contactCache=_contactCache - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> contactFetchingQueue;              //@synthesize contactFetchingQueue=_contactFetchingQueue - In the implementation block
+(id)sharedStore;
+(id)placeholderContact;
+(id)contactForPhoneNumber:(id)arg1 email:(id)arg2 ;
+(id)resultTableContactDescriptorKeys;
+(id)viewControllerDescriptorKeys;
-(id)init;
-(id)contactForIdentifier:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSCache *)contactCache;
-(id)cachedContactForIdentifier:(id)arg1 ;
-(void)setContactCache:(NSCache *)arg1 ;
-(void)setContactFetchingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)cachedContactsForIdentifiers:(id)arg1 ;
-(void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)contactFetchingQueue;
-(id)contactsForIdentifiers:(id)arg1 withKeys:(id)arg2 ;
-(void)fetchContactForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

