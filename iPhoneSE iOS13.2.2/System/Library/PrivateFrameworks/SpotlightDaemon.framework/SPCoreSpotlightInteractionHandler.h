/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)handleInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 ;
-(id)interestingContactIdentifiersFromIntent:(id)arg1 ;
-(id)attributeForIntent:(id)arg1 direction:(long long)arg2 ;
@end
