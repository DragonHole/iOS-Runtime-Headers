/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>

@class NSURL, NSArray;

@interface ISURLResolverOperation : ISOperation {

	CFHostRef _host;
	NSURL* _url;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (readonly) NSArray * resolvedAddresses; 
@property (readonly) NSArray * resolvedAddressStrings; 
-(NSArray *)resolvedAddresses;
-(void)_runLookupForHostname:(id)arg1 ;
-(void)_resolutionCompletedWithError:(id)arg1 ;
-(NSArray *)resolvedAddressStrings;
-(void)dealloc;
-(id)url;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)run;
@end

