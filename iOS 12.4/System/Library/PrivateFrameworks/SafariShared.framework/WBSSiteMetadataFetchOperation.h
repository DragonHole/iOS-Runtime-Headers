/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation {

	WBSSiteMetadataRequest* _request;
	long long _status;

}

@property (setter=_setStatus:,getter=_status) long long status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) WBSSiteMetadataRequest * request;              //@synthesize request=_request - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)_setStatus:(long long)arg1 ;
-(long long)_status;
-(id)init;
-(void)start;
-(BOOL)isFinished;
-(WBSSiteMetadataRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isExecuting;
@end

