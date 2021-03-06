/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSAccountRegistrationDelegate <NSObject>
@optional
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
-(void)account:(id)arg1 aliasesChanged:(id)arg2;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
-(void)account:(id)arg1 profileChanged:(id)arg2;
-(void)account:(id)arg1 loginChanged:(id)arg2;
-(void)account:(id)arg1 displayNameChanged:(id)arg2;
-(void)refreshRegistrationForAccount:(id)arg1;

@end

