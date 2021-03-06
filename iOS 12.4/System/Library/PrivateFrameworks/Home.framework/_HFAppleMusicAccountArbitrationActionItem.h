/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSDictionary, NAFuture;

@interface _HFAppleMusicAccountArbitrationActionItem : NSObject {

	NSString* _actionItemDescription;
	NSSet* _accessories;
	NSDictionary* _userInfo;
	NAFuture* _future;

}

@property (nonatomic,retain) NSString * actionItemDescription;              //@synthesize actionItemDescription=_actionItemDescription - In the implementation block
@property (nonatomic,copy) NSSet * accessories;                             //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NAFuture * future;                             //@synthesize future=_future - In the implementation block
+(id)logoutActionItemForAccessories:(id)arg1 desiredAccount:(id)arg2 ;
+(id)loginActionItemForAccessories:(id)arg1 account:(id)arg2 contextGenerator:(/*^block*/id)arg3 ;
-(void)setFuture:(NAFuture *)arg1 ;
-(NAFuture *)future;
-(void)setActionItemDescription:(NSString *)arg1 ;
-(NSString *)actionItemDescription;
-(NSSet *)accessories;
-(void)setAccessories:(NSSet *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)description;
@end

