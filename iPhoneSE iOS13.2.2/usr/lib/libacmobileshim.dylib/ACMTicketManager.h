/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACCTicketManager.h>

@interface ACMTicketManager : ACCTicketManager
-(id)components;
-(id)preferences;
-(id)systemInfo;
-(void)uninstallPublicKeyForRealm:(id)arg1 ;
-(id)defaultPublicKeyVersionForRealm:(id)arg1 ;
-(id)encodedUserPreferences:(id)arg1 ;
-(id)decodedUserPreferences:(id)arg1 ;
-(SecCertificateRef)defaultPublicKeyCertificateForRealm:(id)arg1 ;
-(id)certificateLabelForRealm:(id)arg1 ;
-(id)publicKeyVersionForRealm:(id)arg1 ;
-(void)setPublickKeyVersion:(id)arg1 label:(id)arg2 forRealm:(id)arg3 ;
-(void)setUserPreferences:(id)arg1 forToken:(id)arg2 ;
-(id)userPreferencesForToken:(id)arg1 ;
@end

