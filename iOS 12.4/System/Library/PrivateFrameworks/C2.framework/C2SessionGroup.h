/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, C2Session, NSArray;

@interface C2SessionGroup : NSObject {

	NSString* _configurationName;
	C2Session* _pinnedSessionAllowingExpiredDNS;
	C2Session* _pinnedSession;
	C2Session* _unpinnedSession;

}

@property (nonatomic,retain) NSString * configurationName;                             //@synthesize configurationName=_configurationName - In the implementation block
@property (nonatomic,retain) C2Session * pinnedSessionAllowingExpiredDNS;              //@synthesize pinnedSessionAllowingExpiredDNS=_pinnedSessionAllowingExpiredDNS - In the implementation block
@property (nonatomic,retain) C2Session * pinnedSession;                                //@synthesize pinnedSession=_pinnedSession - In the implementation block
@property (nonatomic,retain) C2Session * unpinnedSession;                              //@synthesize unpinnedSession=_unpinnedSession - In the implementation block
@property (nonatomic,readonly) NSArray * sessions; 
@property (nonatomic,readonly) BOOL isEmpty; 
-(NSString *)configurationName;
-(void)setConfigurationName:(NSString *)arg1 ;
-(NSArray *)sessions;
-(id)initWithConfigurationName:(id)arg1 ;
-(id)sessionForOptions:(id)arg1 ;
-(void)setSession:(id)arg1 forOptions:(id)arg2 ;
-(C2Session *)pinnedSessionAllowingExpiredDNS;
-(void)setPinnedSessionAllowingExpiredDNS:(C2Session *)arg1 ;
-(C2Session *)pinnedSession;
-(void)setPinnedSession:(C2Session *)arg1 ;
-(C2Session *)unpinnedSession;
-(void)setUnpinnedSession:(C2Session *)arg1 ;
-(BOOL)isEmpty;
-(BOOL)removeSession:(id)arg1 ;
@end

