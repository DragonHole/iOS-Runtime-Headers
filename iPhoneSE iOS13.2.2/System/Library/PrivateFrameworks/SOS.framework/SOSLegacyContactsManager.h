/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FKFriendsManager;

@interface SOSLegacyContactsManager : NSObject {

	FKFriendsManager* _friendsManager;

}

@property (nonatomic,retain) FKFriendsManager * friendsManager;              //@synthesize friendsManager=_friendsManager - In the implementation block
@property (nonatomic,readonly) BOOL SOSLegacyContactsExist; 
+(id)contactStore;
+(BOOL)authorizedToUseContactStore;
+(void)preloadContactStoreIfNecessary;
-(id)init;
-(void)dealloc;
-(void)contactStoreDidChange;
-(id)SOSLegacyContacts;
-(id)_SOSFriends;
-(id)_SOSDestinationsForFriend:(id)arg1 ;
-(id)_SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2 ;
-(id)_contactFromFriend:(id)arg1 ;
-(BOOL)SOSLegacyContactsExist;
-(id)SOSLegacyContactsDestinations;
-(FKFriendsManager *)friendsManager;
-(void)setFriendsManager:(FKFriendsManager *)arg1 ;
@end

