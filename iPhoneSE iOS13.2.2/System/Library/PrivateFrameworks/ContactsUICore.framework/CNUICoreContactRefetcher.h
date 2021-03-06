/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUICoreContactStoreFacade;
#import <ContactsUICore/ContactsUICore-Structs.h>
@class NSArray;

@interface CNUICoreContactRefetcher : NSObject {

	id<CNUICoreContactStoreFacade> _contactStore;
	NSArray* _contactsToRefetch;
	NSArray* _keysToFetch;

}

@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSArray * contactsToRefetch;                              //@synthesize contactsToRefetch=_contactsToRefetch - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                                    //@synthesize keysToFetch=_keysToFetch - In the implementation block
+(id)contactsByReplacingContacts:(id)arg1 withContactsHavingMatchingIdentifier:(id)arg2 ;
+(id)refetchedContacts:(id)arg1 fromStore:(id)arg2 keysToFetch:(id)arg3 ;
+(CNPair*)contactsFoundAndNotFoundByPartioningContacts:(id)arg1 usingFoundContacts:(id)arg2 ;
-(id)init;
-(id<CNUICoreContactStoreFacade>)contactStore;
-(NSArray *)keysToFetch;
-(id)allContacts;
-(id)initWithContactStore:(id)arg1 contactsToRefetch:(id)arg2 keysToFetch:(id)arg3 ;
-(id)foundContacts;
-(NSArray *)contactsToRefetch;
-(id)contactsFoundAndNotFound;
-(id)initWithContactStore:(id)arg1 contactsToRefetch:(id)arg2 ;
@end

