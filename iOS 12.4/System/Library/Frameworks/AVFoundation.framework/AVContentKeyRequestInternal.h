/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVContentKeySession, NSData, NSDictionary, NSError, NSString;

@interface AVContentKeyRequestInternal : NSObject {

	AVContentKeySession* session;
	id identifier;
	NSData* sinfDefaultKeyIdentifier;
	NSData* initializationData;
	long long status;
	id customURLProviderContext;
	int responseInfoSent;
	BOOL providesPersistableKey;
	NSDictionary* preloadingRequestOptions;
	OpaqueFigCPECryptorRef figCryptor;
	NSError* error;
	CFDictionaryRef requestInfo;
	unsigned long long customURLRequestID;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	NSString* cryptorUUID;
	unsigned long long cryptorKeyRequestID;

}
@end

