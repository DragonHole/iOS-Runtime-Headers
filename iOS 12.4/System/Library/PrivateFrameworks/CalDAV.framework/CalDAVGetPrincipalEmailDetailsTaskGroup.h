/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVTaskDelegate.h>

@class NSURL, CalDAVPrincipalEmailDetailsResult, NSString, NSSet;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSURL* _principalURL;
	CalDAVPrincipalEmailDetailsResult* _principalResult;

}

@property (nonatomic,retain) CalDAVPrincipalEmailDetailsResult * principalResult;              //@synthesize principalResult=_principalResult - In the implementation block
@property (nonatomic,retain) NSURL * principalURL;                                             //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,retain,readonly) NSSet * addresses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)principalURL;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(NSSet *)addresses;
-(void)startTaskGroup;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(CalDAVPrincipalEmailDetailsResult *)principalResult;
-(void)setPrincipalResult:(CalDAVPrincipalEmailDetailsResult *)arg1 ;
-(void)_processPropFind:(id)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(NSString *)displayName;
@end

