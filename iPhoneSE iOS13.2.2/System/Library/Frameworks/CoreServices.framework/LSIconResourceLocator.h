/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class LSBundleProxy, NSString, NSURL, NSDictionary;


@protocol LSIconResourceLocator <NSObject>
@property (copy,readonly) LSBundleProxy * typeOwner; 
@property (copy,readonly) NSString * applicationIdentifier; 
@property (readonly) NSURL * resourcesDirectoryURL; 
@property (readonly) NSDictionary * bundleIconsDictionary; 
@required
-(NSString *)applicationIdentifier;
-(LSBundleProxy *)typeOwner;
-(NSDictionary *)bundleIconsDictionary;
-(NSURL *)resourcesDirectoryURL;

@end

