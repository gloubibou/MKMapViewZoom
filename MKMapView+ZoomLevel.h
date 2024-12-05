// MKMapView+ZoomLevel.h
#import <MapKit/MapKit.h>

@interface MKMapView (ZoomLevel)

- (void)zl_setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate
					 zoomLevel:(NSUInteger)zoomLevel
					  animated:(BOOL)animated;

-(MKCoordinateRegion)zl_coordinateRegionWithMapView:(MKMapView *)mapView
								   centerCoordinate:(CLLocationCoordinate2D)centerCoordinate
									   andZoomLevel:(NSUInteger)zoomLevel;
- (NSUInteger)zl_zoomLevel;
- (double)zl_zoomLevelDouble;

@end
